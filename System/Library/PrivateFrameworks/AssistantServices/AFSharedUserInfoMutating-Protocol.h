//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFCompanionDeviceInfo, NSString;

@protocol AFSharedUserInfoMutating <NSObject>
- (void)setICloudAltDSID:(NSString *)arg1;
- (void)setHomeUserId:(NSString *)arg1;
- (void)setCompanionLinkReady:(_Bool)arg1;
- (void)setPersonalRequestsEnabled:(_Bool)arg1;
- (void)setCompanionDeviceInfo:(AFCompanionDeviceInfo *)arg1;
- (void)setLoggableSharedUserId:(NSString *)arg1;
- (void)setSharedUserId:(NSString *)arg1;
@end

