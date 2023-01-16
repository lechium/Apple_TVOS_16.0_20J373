//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDCall, NSArray, NSString, TUHandle;

@protocol CSDCallFilter <NSObject>
- (_Bool)willRestrictAddresses:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (_Bool)shouldRestrictAddresses:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(_Bool)arg3;
- (_Bool)shouldFilterIncomingCall:(CSDCall *)arg1;
- (_Bool)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3;
- (_Bool)isUnknownCall:(CSDCall *)arg1;
- (long long)filterStatusForAddresses:(NSArray *)arg1 withBundleIdentifier:(NSString *)arg2;
- (_Bool)containsRecentsRestrictedHandle:(TUHandle *)arg1;
- (_Bool)containsOutgoingRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(_Bool)arg3;
- (_Bool)containsRestrictedHandle:(TUHandle *)arg1;
@end
