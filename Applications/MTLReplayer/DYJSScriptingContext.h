//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, JSVirtualMachine, NSString;

@interface DYJSScriptingContext : NSObject
{
    struct unordered_map<const char *, OpaqueJSValue *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSValue *>>> _cache;	// 8 = 0x8
    struct unordered_map<const char *, OpaqueJSString *, std::hash<const char *>, std::equal_to<const char *>, std::allocator<std::pair<const char *const, OpaqueJSString *>>> _stringCache;	// 48 = 0x30
    struct OpaqueJSValue *_globalObject;	// 88 = 0x58
    NSString *_filename;	// 96 = 0x60
    JSVirtualMachine *_virtualMachine;	// 104 = 0x68
    JSContext *_context;	// 112 = 0x70
    CDUnknownBlockType _exceptionHandler;	// 120 = 0x78
}

+ (id)sharedContext;	// IMP=0x004000000001d9f0
- (id).cxx_construct;	// IMP=0x002000000001d858
- (void).cxx_destruct;	// IMP=0x001000000001d7e7
@property(copy, nonatomic) CDUnknownBlockType exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) JSVirtualMachine *virtualMachine; // @synthesize virtualMachine=_virtualMachine;
- (id)getGlobalJSONObject:(const char *)arg1;	// IMP=0x001000000001d58a
- (_Bool)setGlobalJSONObject:(const char *)arg1 value:(id)arg2;	// IMP=0x001000000001d342
- (double)getGlobalDouble:(const char *)arg1;	// IMP=0x001000000001d209
- (void)setGlobalDouble:(const char *)arg1 value:(double)arg2;	// IMP=0x001000000001d0dd
- (double)callGlobalFunction:(const char *)arg1;	// IMP=0x001000000001c83a
- (struct OpaqueJSString *)_cachedStringFromString:(const char *)arg1;	// IMP=0x001000000001c189
- (double)callFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x001000000001c147
- (id)getValue:(id)arg1;	// IMP=0x001000000001c131
- (_Bool)evaluteScript:(id)arg1 scriptURL:(id)arg2;	// IMP=0x001000000001c008
- (void)_clearCache;	// IMP=0x001000000001bf44
- (void)setValues:(id)arg1;	// IMP=0x001000000001bef2
- (void)setRawArrayValues:(id)arg1 withUint64Values:(unsigned long long *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000001bdbe
- (struct OpaqueJSValue *)createArrayRef:(id)arg1;	// IMP=0x001000000001bd23
- (void)setRawArrayValues:(id)arg1 withUint32Values:(unsigned int *)arg2 andNumCounters:(unsigned long long)arg3;	// IMP=0x001000000001bc1d
- (id)setValue:(id)arg1 value:(id)arg2;	// IMP=0x001000000001bbc7
- (basic_string_5886a005)_jsValueToString:(struct OpaqueJSValue *)arg1;	// IMP=0x001000000001bb5e
- (basic_string_5886a005)_jsStringToString:(struct OpaqueJSString *)arg1;	// IMP=0x001000000001ba86
- (void)dealloc;	// IMP=0x001000000001ba25
- (void)allocNewContext;	// IMP=0x001000000001b9d5
- (id)init;	// IMP=0x001000000001b96e

@end
