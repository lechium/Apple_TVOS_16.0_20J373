//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLCppContainer;
@protocol CLNotifierServiceClientProtocol;

@protocol CLNotifierServiceProtocol <CLIntersiloServiceProtocol>
- (void)forget:(byref id <CLNotifierServiceClientProtocol>)arg1;
- (void)unregister:(byref id <CLNotifierServiceClientProtocol>)arg1 forNotification:(int)arg2;
- (void)register:(byref id <CLNotifierServiceClientProtocol>)arg1 forNotification:(int)arg2 registrationInfo:(CLCppContainer *)arg3;
@end

