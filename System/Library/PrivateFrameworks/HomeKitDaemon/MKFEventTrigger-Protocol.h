//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFEventTriggerPublicExtensions-Protocol.h>
#import <HomeKitDaemon/MKFTrigger-Protocol.h>

@class MKFEventTriggerDatabaseID, NSArray, NSData, NSNumber, NSUUID, Protocol;
@protocol MKFCalendarEvent, MKFCharacteristicRangeEvent, MKFCharacteristicValueEvent, MKFDurationEvent, MKFEvent, MKFLocationEvent, MKFPresenceEvent, MKFSignificantTimeEvent;

@protocol MKFEventTrigger <MKFTrigger, MKFEventTriggerPublicExtensions>
@property(readonly, copy, nonatomic) MKFEventTriggerDatabaseID *databaseID;
@property(readonly, retain, nonatomic) NSArray *events;
@property(copy, nonatomic) NSNumber *recurrenceDays;
@property(copy, nonatomic) NSNumber *executeOnce;
@property(retain, nonatomic) NSData *evaluationCondition;
- (id <MKFSignificantTimeEvent>)findEventsRelationOfTypeSignificantTimeEventWithModelID:(NSUUID *)arg1;
- (id <MKFSignificantTimeEvent>)createEventsRelationOfTypeSignificantTimeEventWithModelID:(NSUUID *)arg1;
- (id <MKFSignificantTimeEvent>)materializeOrCreateEventsRelationOfTypeSignificantTimeEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFPresenceEvent>)findEventsRelationOfTypePresenceEventWithModelID:(NSUUID *)arg1;
- (id <MKFPresenceEvent>)createEventsRelationOfTypePresenceEventWithModelID:(NSUUID *)arg1;
- (id <MKFPresenceEvent>)materializeOrCreateEventsRelationOfTypePresenceEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFLocationEvent>)findEventsRelationOfTypeLocationEventWithModelID:(NSUUID *)arg1;
- (id <MKFLocationEvent>)createEventsRelationOfTypeLocationEventWithModelID:(NSUUID *)arg1;
- (id <MKFLocationEvent>)materializeOrCreateEventsRelationOfTypeLocationEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFDurationEvent>)findEventsRelationOfTypeDurationEventWithModelID:(NSUUID *)arg1;
- (id <MKFDurationEvent>)createEventsRelationOfTypeDurationEventWithModelID:(NSUUID *)arg1;
- (id <MKFDurationEvent>)materializeOrCreateEventsRelationOfTypeDurationEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFCharacteristicValueEvent>)findEventsRelationOfTypeCharacteristicValueEventWithModelID:(NSUUID *)arg1;
- (id <MKFCharacteristicValueEvent>)createEventsRelationOfTypeCharacteristicValueEventWithModelID:(NSUUID *)arg1;
- (id <MKFCharacteristicValueEvent>)materializeOrCreateEventsRelationOfTypeCharacteristicValueEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFCharacteristicRangeEvent>)findEventsRelationOfTypeCharacteristicRangeEventWithModelID:(NSUUID *)arg1;
- (id <MKFCharacteristicRangeEvent>)createEventsRelationOfTypeCharacteristicRangeEventWithModelID:(NSUUID *)arg1;
- (id <MKFCharacteristicRangeEvent>)materializeOrCreateEventsRelationOfTypeCharacteristicRangeEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFCalendarEvent>)findEventsRelationOfTypeCalendarEventWithModelID:(NSUUID *)arg1;
- (id <MKFCalendarEvent>)createEventsRelationOfTypeCalendarEventWithModelID:(NSUUID *)arg1;
- (id <MKFCalendarEvent>)materializeOrCreateEventsRelationOfTypeCalendarEventWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFEvent>)createEventsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (id <MKFEvent>)materializeOrCreateEventsRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(_Bool *)arg3;
@end

