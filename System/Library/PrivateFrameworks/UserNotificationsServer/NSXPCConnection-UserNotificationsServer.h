//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (UserNotificationsServer)
- (_Bool)uns_isInternalUserNotificationsTool;	// IMP=0x006000000001ff97
- (_Bool)uns_hasEntitlement:(id)arg1 capability:(id)arg2;	// IMP=0x006000000001fe80
- (_Bool)uns_isAllowedToWriteSettings;	// IMP=0x006000000001fe2c
- (_Bool)uns_isAllowedToReadSettings;	// IMP=0x006000000001fdd8
- (_Bool)uns_isAllowedToRequestUserNotificationsForBundleIdentifier:(id)arg1;	// IMP=0x006000000001f94a
- (id)uns_clientBundleProxy;	// IMP=0x006000000001f8ec
@end

