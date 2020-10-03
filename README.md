# ShowArgs
ShowArgs will display the command line arguments with which it was started.

Example:
> ShowArgs.exe /arg1 "-arg2:value ""arg2""" "arg 3"

Displayed result:
> ShowArgs.exe 1.0 outputs its command line arguments:
>    "argc: nb_args" is the number of arguments. nb_args is at least 1 because the program name is passed by the operating system as the 1st argument.
>    "argv[x]: >arg_value<" are the values of the arguments. Surrounding characters > < are delimiters, not part of the value.
> 
> argc: 4

> argv&lbrack;0&rbrack;: &gt;ShowArgs.exe&lt;

> argv&lbrack;1&rbrack;: &gt;/arg1&lt;

> argv&lbrack;2&rbrack;: &gt;-arg2:value "arg2"&lt;

> argv&lbrack;3&rbrack;: &gt;arg 3&lt;
	
