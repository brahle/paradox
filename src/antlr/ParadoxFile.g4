grammar ParadoxFile;

config: (assignment)*;

assignment: field OPERATOR value;
field: string | symbol;

value: integer | percent | real | date | string | symbol | map | array;

symbol: STRING | INT | SYMBOL;
string: STRING;
integer: INT;
real: REAL;
date: DATE;
percent: PCT;
map: BLOCK_START (assignment)* BLOCK_END;
array: BLOCK_START value+ BLOCK_END;

OPERATOR: '=' | '<>' | '>' | '<' | '<=' | '>=' ;
BLOCK_START: '{';
BLOCK_END: '}';

INT: NEGATION?[0-9]+;
PCT: NEGATION?[0-9]+'%';
REAL: NEGATION?[0-9]+'.'[0-9]+;
DATE: [0-9]+'.'[0-9]+'.'[0-9]+;
STRING : STRING_DELIM (~('"' | '\\') | '\\' ('"' | '\\'))* STRING_DELIM;
SYMBOL: [A-Za-z0-9][:@A-Za-z_0-9.%-]*;

WHITESPACE: [ \t\n\r] + -> skip;
LINE_COMMENT: '#'~[\r\n]* -> channel(HIDDEN);

fragment STRING_DELIM: '"';
fragment NEGATION: '-';
