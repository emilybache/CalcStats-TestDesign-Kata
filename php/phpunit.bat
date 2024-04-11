@setlocal
@set XDEBUG_MODE=coverage
@call "%~dp0vendor\bin\phpunit" %*
@set XDEBUG_MODE=
@endlocal
