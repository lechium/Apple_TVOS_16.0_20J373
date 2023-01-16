//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBAlarm, _INPBIntentMetadata;

@protocol _INPBSnoozeAlarmIntent <NSObject>
+ (Class)alarmsType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) unsigned long long alarmsCount;
@property(copy, nonatomic) NSArray *alarms;
- (_INPBAlarm *)alarmsAtIndex:(unsigned long long)arg1;
- (void)addAlarms:(_INPBAlarm *)arg1;
- (void)clearAlarms;
@end

