//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinTimeSpecificationPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFModel-Protocol.h>

@class MKFBulletinTimeSpecificationDatabaseID, NSDate, NSUUID;
@protocol MKFTimePeriodBulletinCondition;

@protocol MKFBulletinTimeSpecification <MKFModel, MKFBulletinTimeSpecificationPublicExtensions>
@property(readonly, copy, nonatomic) MKFBulletinTimeSpecificationDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> startCondition;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> endCondition;
@property(copy, nonatomic) NSDate *writerTimestamp;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@end

