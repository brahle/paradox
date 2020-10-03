grammar ParadoxFile;

config: (assignment)*;

assignment: field OPERATOR? value;
field: string | symbol | variable | LIST_START;

value: integer | percent | real | date | string | symbol | variable | variable_expression | map | array | list | constructor;

symbol: string | INT | REAL | SYMBOL;
string: DSTRING | SSTRING | CSTRING;
integer: INT;
real: REAL;
date: DATE;
percent: PCT;
map: BLOCK_START (assignment)* BLOCK_END;
array
    : BLOCK_START value COMMA? ((value | assignment) COMMA?)* BLOCK_END
    | BLOCK_START (assignment COMMA?)+ value COMMA? ((value | assignment) COMMA?)* BLOCK_END
    ;
variable: VARIABLE_START SYMBOL | VARIABLE_START INT;
variable_expression: VARIABLE_START VARIABLE_EXPRESSION_START expression VARIABLE_EXPRESSION_END;
expression
    : expression MULTIPLY_DIVIDE expression
    | expression PLUS_MINUS expression
    | ABS_VALUE expression ABS_VALUE
    | OPEN_PARENS expression CLOSE_PARENS
    | PLUS_MINUS value
    | value
    ;
list: LIST_START (SYMBOL | string);
constructor: symbol array;

OPERATOR: '=' | '<>' | '>' | '<' | '<=' | '>=' | '!=' | '==';
BLOCK_START: '{';
BLOCK_END: '}';

VARIABLE_START: '@' '\\'?;
VARIABLE_EXPRESSION_START: '[';
VARIABLE_EXPRESSION_END: ']';
ABS_VALUE: '|';
OPEN_PARENS: '(';
CLOSE_PARENS: ')';

LIST_START: 'list';

INT: PLUS_MINUS?[0-9]+;
PCT: PLUS_MINUS?[0-9]+'%';
REAL: PLUS_MINUS?[0-9]*'.'[0-9]+;
DATE: [0-9]+'.'[0-9]+'.'[0-9]+;
SSTRING : '\'' (~('"' | '\\') | '\\' ('"' | '\\'))* '\'';
DSTRING : '"' (~('"' | '\\') | '\\' ('"' | '\\'))* '"';
CSTRING: '“' (~('"' | '\\') | '\\' ('"' | '\\'))* '”';
SYMBOL: SYMBOL_START (| SYMBOL_END | SYMBOL_INNER+ SYMBOL_END);
PLUS_MINUS: PLUS_MINUS_F;
MULTIPLY_DIVIDE: MULTIPLY_DIVIDE_F;
COMMA: ',';

WHITESPACE: [ \t\n\r] + -> skip;
LINE_COMMENT: '#'~[\r\n]* -> channel(HIDDEN);

fragment STRING_DELIM: ('"' | '\'');
fragment PLUS_MINUS_F: [-+];
fragment MULTIPLY_DIVIDE_F: [*/];

fragment SYMBOL_START: [0-9\p{Cased}\p{Ideographic}·“”’$_];
fragment SYMBOL_INNER: [\p{Cased}\p{Ideographic}0-9'·“”’&/$|:@_.?^%-];
fragment SYMBOL_END: [\p{Cased}\p{Ideographic}0-9'·“”’&/$:@_.%-];
