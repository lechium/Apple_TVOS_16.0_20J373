//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface GTXPCDispatcher : NSObject
{
    NSSet *_protocolMethods;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000062cde
- (void)dispatchMessage:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000062baa
- (id)initWithProtocolMethods:(id)arg1;	// IMP=0x0010000000062b28

@end
