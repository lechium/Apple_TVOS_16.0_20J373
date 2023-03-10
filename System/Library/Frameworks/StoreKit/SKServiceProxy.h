//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface SKServiceProxy : NSObject
{
    NSLock *_serviceConnectionLock;	// 8 = 0x8
    NSXPCConnection *_serviceConnection;	// 16 = 0x10
}

+ (id)serviceProxy;	// IMP=0x006000000002f4a2
+ (id)inAppClientInterface;	// IMP=0x006000000002f296
+ (id)inAppServiceInterface;	// IMP=0x006000000002f276
- (void).cxx_destruct;	// IMP=0x000000000002f92f
- (id)inAppService;	// IMP=0x000000000002f91b
- (id)inAppServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f909
- (id)objectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002f823
- (void)_serviceConnectionInvalidated;	// IMP=0x000000000002f7de
- (id)serviceConnection;	// IMP=0x000000000002f54d
- (id)init;	// IMP=0x000000000002f4f7

@end

