# Autofill Selector

An autofill service is an app that makes it easier for users to fill out forms by injecting data into the views of other apps. 

<img src="https://i.imgur.com/3UdYuxI.png" width=200 />

This axway's Titanium module is a little helper for selecting the right autofill service. It opens a system dialog (see above), user can select and module receives a callback.

## Usage

```js
import AF from 	'de.appwerft.autofillselector';
const $ = Ti.UI.createWindow();

$.addEventListener('open', () => {
		AF.onResult = e => {
		if (e.success == true) {
			// do something		
		}
	};
	const res = AF.hasEnabledAutofillServices();
	if (!res) {
		AF.requestAutofillService();
	}
});

$.open();
```