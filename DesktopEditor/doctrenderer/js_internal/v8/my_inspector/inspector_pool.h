#ifndef INSPECTORPOOL_H
#define INSPECTORPOOL_H

#include <unordered_map>

#include "inspector.h"

class CInspectorPool
{
	using storage_t = std::unordered_map<v8::Isolate*, CInspector>;

	storage_t m_Inspectors;

	// add new inspector
	CInspector& addInspector(v8::Isolate* pIsolate);

	// port for server
	static uint16_t getPort();
	// group id for V8 internals
	static int getContextGroupId();

	// private due to singletone pattern
	CInspectorPool() = default;
	~CInspectorPool() = default;

public:
	CInspectorPool(const CInspectorPool&) = delete;
	CInspectorPool(CInspectorPool&&) = delete;
	CInspectorPool& operator=(const CInspectorPool&) = delete;
	CInspectorPool& operator=(CInspectorPool&&) = delete;

	// get instance
	static CInspectorPool& get();
	// get inspector by isolate
	CInspector& getInspector(v8::Isolate* pIsolate);
	// remove inspector from isolate
	void disposeInspector(v8::Isolate* pIsolate);
};

#endif // INSPECTORPOOL_H
