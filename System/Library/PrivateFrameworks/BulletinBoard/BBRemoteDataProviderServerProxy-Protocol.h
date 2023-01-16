//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/NSObject-Protocol.h>

@class BBBulletinRequest, BBDataProviderIdentity, BBSectionInfo, NSString;

@protocol BBRemoteDataProviderServerProxy <NSObject>
- (void)setSectionInfo:(BBSectionInfo *)arg1;
- (void)getSectionInfoWithCompletion:(void (^)(BBSectionInfo *, NSError *))arg1;
- (void)setClearedInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(void (^)(id, NSError *))arg1;
- (void)reloadDefaultSectionInfo:(BBDataProviderIdentity *)arg1;
- (void)reloadSectionParameters:(BBDataProviderIdentity *)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(NSString *)arg1;
- (void)withdrawBulletinsWithRecordID:(NSString *)arg1;
- (void)modifyBulletin:(BBBulletinRequest *)arg1;
- (void)addBulletin:(BBBulletinRequest *)arg1 forDestinations:(unsigned long long)arg2;
- (void)invalidateBulletins;
@end

