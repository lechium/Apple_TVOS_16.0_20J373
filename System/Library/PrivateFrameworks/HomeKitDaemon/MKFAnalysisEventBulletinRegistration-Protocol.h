//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFAnalysisEventBulletinRegistrationPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFBulletinRegistration-Protocol.h>

@class MKFAnalysisEventBulletinRegistrationDatabaseID, NSNumber;
@protocol MKFAccessory, MKFHome;

@protocol MKFAnalysisEventBulletinRegistration <MKFBulletinRegistration, MKFAnalysisEventBulletinRegistrationPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFAnalysisEventBulletinRegistrationDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFAccessory> accessory;
@property(copy, nonatomic) NSNumber *classifierOptions;
@end

