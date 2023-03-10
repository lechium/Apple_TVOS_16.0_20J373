//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface UIKeyboardInputManagerClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x0060000000a8d0ea
- (void).cxx_destruct;	// IMP=0x0000000000a8d6eb
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)handleError:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000a8d536
- (void)handleRequest:(id)arg1;	// IMP=0x0000000000a8d384
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000000a8d2c6
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000a8d25f
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000a8d1ee
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000a8d193
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000a8d140
- (id)init;	// IMP=0x0000000000a8cf0f
- (void)dealloc;	// IMP=0x0000000000a8cecd

@end

