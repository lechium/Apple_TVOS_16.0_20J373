//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC17SiriMemoryService35ReferenceResolutionStoreXPCListener : NSObject
{
    MISSING_TYPE *module;	// 8 = 0x8
    MISSING_TYPE *listener;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000118b0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000117a0
- (void)deleteEntitiesForKeys:(id)arg1 for:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000116c0
- (void)updateEntitiesWith:(id)arg1 for:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000115d0
- (void)pullEntitiesFor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011510
- (void)listEntitiesFor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000114f0
- (id)init;	// IMP=0x0000000000011420

@end

