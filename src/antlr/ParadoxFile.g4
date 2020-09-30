grammar ParadoxFile;

config: (assignment)*;

assignment: field OPERATOR? value;
field: string | symbol | variable | LIST_START;

value: integer | percent | real | date | string | symbol | variable | variable_expression | map | array | list | constructor;

symbol: string | INT | REAL | SYMBOL;
string: DSTRING | SSTRING;
integer: INT;
real: REAL;
date: DATE;
percent: PCT;
map: BLOCK_START (assignment)* BLOCK_END;
array: BLOCK_START (assignment)* value (value | assignment)* BLOCK_END;
variable: VARIABLE_START SYMBOL;
variable_expression: VARIABLE_START VARIABLE_EXPRESSION_START expression VARIABLE_EXPRESSION_END;
expression: value | value EXPRESSION_OPERATOR expression;
list: LIST_START (SYMBOL | string);
constructor: symbol array;

OPERATOR: '=' | '<>' | '>' | '<' | '<=' | '>=' | '!=' | '==';
BLOCK_START: '{';
BLOCK_END: '}';

VARIABLE_START: '@';
VARIABLE_EXPRESSION_START: '[';
VARIABLE_EXPRESSION_END: ']';
EXPRESSION_OPERATOR: '+' | '-' | '*' | '/';

LIST_START: 'list';

INT: NEGATION?[0-9]+;
PCT: NEGATION?[0-9]+'%';
REAL: NEGATION?[0-9]*'.'[0-9]+;
DATE: [0-9]+'.'[0-9]+'.'[0-9]+;
SSTRING : '\'' (~('"' | '\\') | '\\' ('"' | '\\'))* '\'';
DSTRING : '"' (~('"' | '\\') | '\\' ('"' | '\\'))* '"';
SYMBOL: [a-zA-Z0-9\u0080-\u7fff$_][a-zA-Z0-9\u0080-\u7fff'&/$|:@_.%-]*;

WHITESPACE: [ \t\n\r] + -> skip;
LINE_COMMENT: '#'~[\r\n]* -> channel(HIDDEN);

fragment STRING_DELIM: ('"' | '\'');
fragment NEGATION: '-';
