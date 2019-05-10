/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2018 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace de {
namespace appwerft {
namespace autofillselector {

class AutofillselectorModule : public titanium::Proxy
{
public:
	explicit AutofillselectorModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void cancel(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAvailableFieldClassificationAlgorithms(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getUserDataId(const v8::FunctionCallbackInfo<v8::Value>&);
	static void hasEnabledAutofillServices(const v8::FunctionCallbackInfo<v8::Value>&);
	static void disableAutofillService(const v8::FunctionCallbackInfo<v8::Value>&);
	static void commit(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isAutofillSupported(const v8::FunctionCallbackInfo<v8::Value>&);
	static void requestAutofillService(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isEnabled(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDefaultFieldClassificationAlgorithm(const v8::FunctionCallbackInfo<v8::Value>&);
	static void requestAutofill(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getAutofillServiceComponentName(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // autofillselector
} // appwerft
} // de
