//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PushConnection, PushMessage;

@protocol PushConnectionDelegate <NSObject>
- (void)pushConnection:(PushConnection *)arg1 didRecieveMessage:(PushMessage *)arg2;
@end

