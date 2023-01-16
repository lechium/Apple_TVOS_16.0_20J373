//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSString;

@protocol AFMultiUserService <NSObject>
- (oneway void)getSharedUserInfoForSharedUserID:(NSString *)arg1 completion:(void (^)(AFSharedUserInfo *))arg2;
- (oneway void)homeUserIdToNames:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getPreferredMediaUserHomeUserIDWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getiCloudAltDSIDOfRecognizedUserWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getHomeUserIdOfRecognizedUserWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getMultiUserSettingsForSharedUserID:(NSString *)arg1 completion:(void (^)(AFPersonalUserSettings *, NSError *))arg2;
- (oneway void)getConformingSharedUserIds:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)getFirstNameForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getConformingSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (oneway void)isCompanionAvailableOnWiFiWithAssistantId:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (oneway void)getSharedUserIdsForiTunesAltDSID:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getiCloudUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getSharedUserIdForHomeUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getHomeUserIdForSharedUserId:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

