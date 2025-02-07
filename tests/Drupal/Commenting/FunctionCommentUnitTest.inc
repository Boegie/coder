<?php

/**
 * @file
 * Some function comment tests.
 */

/**
 * Test.
 *
 * @param string $x
 *   Comment does not end with full stop
 * @param string $y
 *   comment does not start with a capital letter.
 */
function foo($x, $y) {

}

/**
 * Missing exception description in the throws tag, which is OK.
 *
 * @throws \Drupal\locale\StringStorageException
 */
function test1() {

}

/**
 * Wrong indentation of description for the throws tag.
 *
 * @throws \Drupal\locale\StringStorageException
 *  Description here.
 */
function test2() {

}

/**
 * Description for the throws tag does not start with capital letter.
 *
 * @throws \Drupal\locale\StringStorageException
 *   description here.
 */
function test3() {

}

/**
 * Description for the throws tag does not end with a dot.
 *
 * @throws \Drupal\locale\StringStorageException
 *   Description here
 */
function test4() {

}

/**
 * Description for the throws tag must be on the next line.
 *
 * @throws \Drupal\locale\StringStorageException Description here.
 */
function test5() {

}

/**
 * Some description.
 *
 * @param string $foo
 *   Some parameter that does not exist.
 */
function test6() {

}

function test7() {
  // Missing function doc here.
}

/**
 * Test methods.
 */
class Test {

  public function undocumented() {

  }

  // This should be a doc comment.
  public function wrong() {

  }

}

/**
 * Some comment.
 *
 * @param int $x Description should be on the next line.
 */
function test8($x) {

}

/**
 * Default implementation of a menu item (without a page or form controller).
 *
 * UML:
 * @link http://drupal7demo.webel.com.au/node/1017 DefaultMenuItem @endlink.
 *
 * @param integer $foo
 *   Test.
 */
function test9($foo) {

}

/**
 * Default implementation of a menu item (without a page or form controller).
 *
 * UML:
 * @link http://drupal7demo.webel.com.au/node/1017 DefaultMenuItem @endlink.
 *
 * @param integer $foo Test.
 */
function test10($foo) {

}

/**
 * A function may throw multiple exceptions.
 *
 * @throws \Exception
 *   Thrown when something bad happens.
 * @throws \InvalidArgumentException
 *   Thrown when an argument is invalid.
 */
function test11() {

}

/**
 * Update or set users expiration time
 *
 * @param object $user
 * @param int $timespan (seconds)
 */
function test12($user, $timespan) {

}

/**
 * Update or set users expiration time.
 *
 * @param object $user
 *   Object type hint in comment without real type hint is allowed.
 */
function test13($user) {

}

/**
 * Update or set users expiration time.
 *
 * @param object $user
 *   Object stdClass type hint is allowed for object.
 */
function test14(stdClass $user) {

}

/**
 * Array parameter type mismatch is allowed, use PHPStan to validate types.
 *
 * @param array $foo
 *   Comment here.
 */
function test15(Test $foo) {

}

/*
 * This should be converted into a doc comment.
 */
function test16() {

}

/**
 * Return comment indentation should be three spaces.
 *
 * @return string
 * This is not indented correctly.
 */
function test17() {
  return '1';
}

/**
 * Return comment indentation should be three spaces.
 *
 * @return string
 *This is not indented correctly.
 */
function test18() {
  return '1';
}

/**
 * Return comment indentation should be three spaces.
 *
 * @return string
 * This is not indented correctly. Continues on the next line because this is a
 * really long sentence.
 */
function test19() {
  return '1';
}

/**
 * Multiple errors in @param line.
 *
 * @param   string    $arg1 This should be in next line and needs period
 */
function test20($arg1) {
}

/**
 * Testing fix of incorrect param types.
 *
 * @param Array $arg1
 *   The parameter type is not valid.
 * @param integer|bool $arg2
 *   One of the parameter types listed is not valid.
 * @param integer|boolean|Array $arg3
 *   All of the parameter types listed are not valid.
 */
function test21($arg1, $arg2, $arg3) {
}

/**
 * Test for allowed param var types.
 *
 * @param array|bool|float|int|mixed|object|string|resource|callable $arg1
 *   All of the above types are valid.
 * @param Array|boolean|integer|str|NULL $arg2
 *   All of the above types are invalid.
 * @param array()|Boolean|number|String $arg3
 *   All of the above types are invalid.
 * @param type $arg4
 *   All of the above types are invalid.
 * @param FALSE|TRUE|Int $arg5
 *   All of the above types are invalid.
 * @param Bool|Integer $arg6
 *   All of the above types are invalid.
 */
function test22($arg1, $arg2, $arg3, $arg4, $arg5, $arg6) {
}

/**
 * Void returns allowed when null is given in @return.
 *
 * When null is a potential return value it should be allowed to have return
 * statements with void return as well.
 *
 * @return bool|null
 *   This implies that the return value can be NULL, a boolean, or empty.
 */
function test23() {
  if (1 == 2) {
    return;
  }
  return TRUE;
}

/**
 * Don't test if the return type was actually fulfilling all options.
 *
 * Even if there is bool specified we don't care if it is actually used or not.
 * Other tools such as PHPStan should be used to validate the return types.
 * This is fine!
 *
 * @return bool|null
 *   This implies that the return value can be NULL, a boolean, or empty.
 */
function test24() {
  if (1 == 2) {
    return;
  }
  return;
}

/**
 * The shorthand array syntax should not be used as a return type.
 *
 * @return []
 *   The array.
 */
function test25() {
  return [];
}

/**
 * Type declarations should not have any illegal characters.
 *
 * @param \Ille§al $var
 *   This character does not belong here.
 *
 * @return \Some/Namespace
 *   This should not have a forward slash.
 */
function test26($var) {
  return '';
}

/**
 * Data types with spaces.
 *
 * @param string or int $x
 *   Data types should not contain spaces.
 *
 * @return int or bool
 *   Same spaces in data type here.
 */
function test27($x) {
  return 0;
}

/**
 * Return docs should not contain variable names.
 *
 * @return string $profile
 *   The profile.
 */
function test28() {
  $profile = 'x';
  return $profile;
}

/**
 * Not fixable return comment.
 *
 * @return string $profile more confusing text here.
 *   The profile.
 */
function test29() {
  $profile = 'x';
  return $profile;
}

/**
 * Indentation of param comment is wrong.
 *
 * @param string $xml_response
 *    String returned from CreateClientProfile.
 *
 * @return mixed
 *    Return fetched bookings or log error.
 */
function test30($xml_response) {

}

/**
 * Class Test.
 */
class Test2 extends AbstractTest {

  /**
   * Run method with missing described variable.
   *
   * @param \stdClass $start
   *   Start point.
   *
   * @return bool
   *   Result.
   */
  public function run(\stdClass $start, \stdClass $stop) {
    return TRUE;
  }

}

/**
 * Comment of param is just one word, which means it is the data type.
 *
 * @param $a array
 * @param $b array
 */
function test31($a, $b) {

}

class PostcodeAnywhere_Interactive_Find {

   private $UserName; //The username associated with the Royal Mail license (not required for click licenses).
   private $Data; //Holds the results of the query

   function PostcodeAnywhere_Interactive_Find($Key, $SearchTerm, $PreferredLanguage, $Filter, $UserName)
   {
      $this->Key = $Key;
      $this->SearchTerm = $SearchTerm;
      $this->PreferredLanguage = $PreferredLanguage;
      $this->Filter = $Filter;
      $this->UserName = $UserName;
   }
}

/**
 * There should be no dots.
 *
 * @param string $a.
 *   Some comment.
 * @param string $b.
 *   Another comment.
 */
function test32($a, $b) {

}

/**
 * There should be no dots and comments should be on the next line.
 *
 * @param string $a. Some comment.
 * @param string $b. Another comment.
 */
function test33($a, $b) {

}

/**
 * Yield should be a recognised return statement.
 *
 * @return int
 *   Integer value.
 */
function test34($a, $b) {
  for ($i = 1; $i <= 3; $i++) {
    yield $i;
  }
}

/**
 * Using \stdClass as type hint and doc type is ok.
 *
 * @param object $name
 *   Some description.
 * @param \stdClass $param2
 *   Some description.
 */
function test35(\stdClass $name, \stdClass $param2) {

}

/**
 * Allow "object" as real type hint (PHP 7.2).
 *
 * @param \stdClass $arg
 *   Something here.
 * @param object $blarg
 *   Another thing.
 */
function test36(object $arg, object $blarg) {
  return $arg;
}

/**
 * A class with a method that has the same name as the class.
 */
class Small {

  /**
   * Our small constructor.
   */
  public function __construct() {
  }

  /**
   * Return tag should be allowed here.
   *
   * @return string
   *   Something small.
   */
  public function small() {
    return 'string';
  }

}

/**
 * Some short comment.
 *
 * @param array $matches
 *   An array of matches by a preg_replace_callback() call that scans for
 *   @import-ed CSS files, except for external CSS files.
 * @param array $sub_key
 *   An array containing the sub-keys specifying the library asset, e.g.
 *   @code['js']@endcode or @code['css', 'component']@endcode
 * @param string $to
 *   The email address or addresses where the message will be sent to. The
 *   formatting of this string will be validated with the
 *   @link http://php.net/manual/filter.filters.validate.php PHP email @endlink.
 */
function test37(array $matches, array $sub_key, $to) {

}

/**
 * Yield from should be a recognised return statement.
 *
 * @return Generator
 *   Generator value.
 */
function test38($a, $b) {
  yield from [$a, $b];
}

/**
 * Allow "mixed" as real type hint (PHP 8.0).
 *
 * @param mixed $arg
 *   Something here.
 */
function test39(mixed $arg) {
  return $arg;
}

/**
 * Test multiline comments with excess spaces in the param annotation.
 */
class Test40 {

    /**
     * Test method.
     *
     * @param string      $errorMessage
     *   It only breaks when this comment spans multiple lines but won't break if
     * you put it on a single line.
     */
    public function test41(string $errorMessage) {

    }

}

/**
 * Test PHP attributes.
 */
class Test41 {

  /**
   * Method docblock.
   */
  #[Some\Attribute(foo: 'bar')]
  #[Other\Attribute(baz: 'qux')]
  public function method() {
  }

}

/**
 * Support for PHPStan basic types.
 *
 * @param int $param1
 *   Integer.
 * @param string $param2
 *   String.
 * @param array-key $param3
 *   Array key.
 * @param bool $param4
 *   Boolean.
 * @param true $param5
 *   Boolean TRUE.
 * @param false $param6
 *   Boolean FALSE.
 * @param null $param7
 *   NULL.
 * @param float $param8
 *   Float.
 * @param double $param9
 *   Double.
 * @param scalar $param10
 *   Scalar.
 * @param array $param11
 *   Array.
 * @param iterable $param12
 *   Iterable.
 * @param callable $param13
 *   Callable.
 * @param resource $param14
 *   Resource.
 * @param void $param15
 *   Void.
 * @param object $param16
 *   Object.
 *
 * @see https://phpstan.org/writing-php-code/phpdoc-types#basic-types
 */
function test_basic_types(int $param1, string $param2, mixed $param3, bool $param4, bool $param5, bool $param6, $param7, float $param8, $param9, $param10, array $param11, $param12, $param13, $param14, $param15, $param16) {

}

/**
 * @return int
 *   Int.
 */
function test_return_int(): int {
  return 0;
}

/**
 * @return int
 *   Int
 */
function test_return_int2() {
  return 0;
}

/**
 * @return string
 *   String.
 */
function test_return_string(): string {
  return '';
}

/**
 * @return string
 *   String.
 */
function test_return_string2() {
  return '';
}

/**
 * @return array-key
 *   Array key.
 */
function test_return_array_key() {
  return '';
}

/**
 * @return void
 *   Void.
 */
function test_return_void() {
}

/**
 * @return void
 *   Void.
 */
function test_return_void2(): void {
}

/**
 * PHPStan: General arrays.
 *
 * @param Type[] $param1
 *   Parameter.
 * @param array<Type> $param2
 *   Parameter.
 * @param array<int, Type> $param3
 *   Parameter.
 * @param non-empty-array<Type> $param4
 *   Parameter.
 * @param non-empty-array<int, Type> $param5
 *   Parameter.
 *
 * @see https://phpstan.org/writing-php-code/phpdoc-types#general-arrays
 */
function test_arrays(array $param1, array $param2, array $param3, array $param4, array $param5) {
}

/**
 * @return Type[]
 *   Square brackets.
 */
function test_return_type_array(): array {
  return [];
}

/**
 * @return array<Type>
 *   Arrow brackets.
 */
function test_return_arrow_array(): array {
  return [];
}

/**
 * @return array<int, Type>
 *   Keyed array.
 */
function test_return_keyed_array(): array {
  return [];
}

/**
 * @return non-empty-array<Type>
 *   Non empty array with type.
 */
function test_return_non_empty_array(): array {
  return [new Type()];
}

/**
 * @return non-empty-array<int, Type>
 *   Non empty keyed array with type.
 */
function test_return_non_empty_keyed_array(): array {
  return [0 => new Type()];
}

/**
 * PHPStan: Array shapes.
 *
 * @param array{'foo': int, "bar": string} $param1
 *   Parameter.
 * @param array{0: int, 1?: int} $param2
 *   Parameter.
 * @param array{int, int} $param3
 *   Parameter.
 * @param array{foo: int, bar: string} $param4
 *   Parameter.
 *
 * @see https://phpstan.org/writing-php-code/phpdoc-types#array-shapes
 */
function test_advanced_array_shapes(array $param1, array $param2, array $param3, array $param4) {
}

/**
 * @return array{'foo': int, "bar": string}
 *   Array.
 */
function test_return_array_shape(): array {
  return [];
}

/**
 * @return array{0: int, 1?: int}
 *   Array.
 */
function test_return_array_shape_int(): array {
  return [];
}

/**
 * @return array{int, int}
 *   Array.
 */
function test_return_array_shape_nokey(): array {
  return [];
}

/**
 * @return array{foo: int, bar: string}
 *   Array.
 */
function test_return_array_shape_noquote(): array {
  return [];
}

/**
 * PHPStan: Integer ranges.
 *
 * @param positive-int $param1
 *   Parameter.
 * @param negative-int $param2
 *   Parameter.
 * @param int<0, 100> $param3
 *   Parameter.
 * @param int<min, 100> $param4
 *   Parameter.
 * @param int<50, max> $param5
 *   Parameter.
 *
 * @see https://phpstan.org/writing-php-code/phpdoc-types#integer-ranges
 */
function test_integer_ranges(int $param1, int $param2, int $param3, int $param4, int $param5) {
}

/**
 * @return positive-int
 *   Integer.
 */
function test_return_positive_integer(): int {
  return 1;
}

/**
 * @return negative-int
 *   Integer.
 */
function test_return_negative_integer(): int {
  return -1;
}

/**
 * @return int<0, 100>
 *   Integer.
 */
function test_return_integer_range(): int {
  return 0;
}

/**
 * @return int<min, 100>
 *   Integer.
 */
function test_return_integer_min(): int {
  return 0;
}

/**
 * @return int<50, max>
 *   Integer.
 */
function test_return_integer_max(): int {
  return 50;
}

/**
 * PHPStan: Advanced string types.
 *
 * @param class-string $param1
 *   Parameter.
 * @param class-string<Foo> $param2
 *   Parameter.
 * @param callable-string $param3
 *   Parameter.
 * @param numeric-string $param4
 *   Parameter.
 * @param non-empty-string $param5
 *   Parameter.
 * @param non-falsy-string $param6
 *   Parameter.
 * @param literal-string $param7
 *   Parameter.
 * @param numeric-string|null $param8
 *   Parameter.
 *
 * @see https://phpstan.org/writing-php-code/phpdoc-types#other-advanced-string-types
 */
function test_string_types(string $param1, string $param2, string $param3, string $param4, string $param5, string $param6, string $param7, $param8) {
}

/**
 * @return class-string
 *   Class string.
 */
function test_return_class_string(): string {
  return '';
}

/**
 * @return class-string<Foo>
 *   Class string.
 */
function test_return_class_string_foo(): string {
  return '';
}

/**
 * @return callable-string
 *   Callable string.
 */
function test_return_callable_string(): string {
  return '';
}

/**
 * @return numeric-string
 *   Numeric string.
 */
function test_return_numeric_string(): string {
  return '';
}

/**
 * @return non-empty-string
 *   Non empty string.
 */
function test_return_non_empty_string(): string {
  return 'foo';
}

/**
 * @return non-falsy-string
 *   Non falsy string.
 */
function test_return_non_falsy_string(): string {
  return '';
}

/**
 * @return literal-string
 *   Literal string.
 */
function test_return_literal_string(): string {
  return '';
}

/**
 * PHP 8 intersection types are ok.
 *
 * @param Foo&Bar $a
 *   Intersection type parameter.
 *
 * @return Foo&Bar
 *   Intersection type return declaration.
 */
function test_intersection_types(Foo&Bar $a): Foo&Bar {
  return new Xyz();
}

/**
 * Class comment.
 */
class Test3 {

  /**
   * Variadic parameters are ok.
   *
   * @param string[]|string ...$classes
   *   A variadic parameter.
   *
   * @return array
   *   The return array.
   */
  public function testVariadicParameter(...$classes): array {
    return [];
  }

  /**
   * Variadic parameters without description are not ok.
   *
   * @param string[]|string ...$classes
   *
   * @return array
   *   The return array.
   */
  public function testVariadicParameterNoDescription(...$classes): array {
    return [];
  }

}

/**
 * Test that docblock is optional for __construct methods.
 */
class Test43 {

  public function __construct() {
  }

}

/**
 * Closure return statements with different types are allowed.
 *
 * @return array
 *   Some array.
 */
function return_some_array(): array {
  do_something_with_a_callback(function () {
    if ($some_condition) {
      // Early return.
      return;
    }

    // Do work.
  });
  return [];
}
