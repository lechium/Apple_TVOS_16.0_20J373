//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface VSSubscriptionServiceConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001d08e
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)serviceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cff0
- (void)dealloc;	// IMP=0x000000000001cfae
- (id)init;	// IMP=0x000000000001ceec

@end
