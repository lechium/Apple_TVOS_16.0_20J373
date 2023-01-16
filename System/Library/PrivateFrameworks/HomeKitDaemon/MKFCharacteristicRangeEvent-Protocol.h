//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFCharacteristicEvent-Protocol.h>
#import <HomeKitDaemon/MKFCharacteristicRangeEventPublicExtensions-Protocol.h>

@class MKFCharacteristicRangeEventDatabaseID, NSObject;
@protocol MKFHome;

@protocol MKFCharacteristicRangeEvent <MKFCharacteristicEvent, MKFCharacteristicRangeEventPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFCharacteristicRangeEventDatabaseID *databaseID;
@property(retain, nonatomic) NSObject *min;
@property(retain, nonatomic) NSObject *max;
@end

