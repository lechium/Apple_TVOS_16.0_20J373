//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC13TeaFoundation15BridgedResolver : NSObject
{
    MISSING_TYPE *resolver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009d0f0
- (id)init;	// IMP=0x000000000009d090
- (id)resolveOptionalProtocol:(id)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009cf40
- (id)resolveProtocol:(id)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009cde0
- (id)resolveOptionalProtocol:(id)arg1 name:(id)arg2;	// IMP=0x000000000009cbb0
- (id)resolveProtocol:(id)arg1 name:(id)arg2;	// IMP=0x000000000009caa0
- (id)resolveOptionalProtocol:(id)arg1 contextBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009c8b0
- (id)resolveProtocol:(id)arg1 contextBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009c790
- (id)resolveOptionalProtocol:(id)arg1;	// IMP=0x000000000009c5b0
- (id)resolveProtocol:(id)arg1;	// IMP=0x000000000009c4d0
- (id)resolveOptionalClass:(Class)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009c2e0
- (id)resolveClass:(Class)arg1 name:(id)arg2 contextBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009c1a0
- (id)resolveOptionalClass:(Class)arg1 contextBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bf40
- (id)resolveClass:(Class)arg1 contextBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bda0
- (id)resolveOptionalClass:(Class)arg1 name:(id)arg2;	// IMP=0x000000000009bb70
- (id)resolveClass:(Class)arg1 name:(id)arg2;	// IMP=0x000000000009ba90
- (id)resolveOptionalClass:(Class)arg1;	// IMP=0x000000000009b7b0
- (id)resolveClass:(Class)arg1;	// IMP=0x000000000009b6e0
- (id)currentObjectGraphResolver:(unsigned long long)arg1;	// IMP=0x000000000009b5b0

@end

