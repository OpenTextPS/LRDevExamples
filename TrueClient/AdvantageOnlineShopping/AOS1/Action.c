//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("4", "Navigate to 'https://www.advantageon...shopping.com/#/'", "snapshot=Action_4.inf");
	truclient_step("6", "Click on button (1) button", "snapshot=Action_6.inf");
	truclient_step("7", "Click on username textbox", "snapshot=Action_7.inf");
	truclient_step("8", "Type mercury in username textbox", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Password label", "snapshot=Action_9.inf");
	truclient_step("10", "Type ******* in PasswordPassword passwordbox", "snapshot=Action_10.inf");
	truclient_step("11", "Click on SIGN IN button", "snapshot=Action_11.inf");
	truclient_step("12", "Click on CloseDark", "snapshot=Action_12.inf");
	truclient_step("13", "Click on HelpLink JavaScript link", "snapshot=Action_13.inf");
	truclient_step("14", "Click on About label", "snapshot=Action_14.inf");
	truclient_step("16", "Click on button (2) button", "snapshot=Action_16.inf");
	truclient_step("17", "Click on AOS Versions label", "snapshot=Action_17.inf");
	truclient_step("18", "Click on VERSION 3.3 JavaScript link", "snapshot=Action_18.inf");
	truclient_step("19", "Click on VERSION 3.3 label", "snapshot=Action_19.inf");
	truclient_step("21", "Close Tab active tab", "snapshot=Action_21.inf");

	return 0;
}
