//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GTXPCConnection;

@interface GTURLAccessProviderXPCProxy : NSObject
{
    id <GTXPCConnection> _connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000065c64
- (void)transferIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065ad3
- (id)makeURL:(id)arg1;	// IMP=0x001000000006593f
- (void)securityScopedURLFromSandboxID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065811
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x001000000006578f
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x0010000000065613

@end
