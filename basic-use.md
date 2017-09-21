
### Difference Table
| categories   |      both      |  PHP |  Hack |
|:----------:|:-------------:|:------:|:--------:|
| Primitive Types |  bool, int, float, string, array, and resource | boolean, integer, real, and double |  |
| mixed |       |    | any value, including null |
| returning void |  |  valid | invalid, replaced with **mixed** |
| classname | | can use a string containing the name of a class in any position |classname<Thing> |

### num
either an integer or a float

### arraykey
either an integer or a string

### tuple
fixed number of values, common use is to return multiple values. Can't add or remove elements, can replace value but keep the same type. **is_array -> true**

