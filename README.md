# Autofill Selector

An autofill service is an app that makes it easier for users to fill out forms by injecting data into the views of other apps. 

<img src="https://4.bp.blogspot.com/-lVe8xrfcdeI/Wgy9BY13hRI/AAAAAAAAEzg/GCVosf8ahRYovP_w4vPZIA_CILqC0_e7wCLcBGAs/s1600/image1.png" width=200 />

This axway's Titanium module is a little helper for selecting the right autofill service. It opens a system dialog (see avove), user can select and module receives a callback.

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