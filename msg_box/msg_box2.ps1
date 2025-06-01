$MethodDefinition = @'
[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
public static extern int MessageBoxW(IntPtr hWnd, string lpText, string lpCaption, uint utype);
'@
$User32 = Add-Type -MemberDefinition $MethodDefinition -Name 'User32' -Namespace 'Win32' -PassThru
$User32::MessageBoxW([IntPtr]::Zero, "Hi mom!", "Hello world!", 0)