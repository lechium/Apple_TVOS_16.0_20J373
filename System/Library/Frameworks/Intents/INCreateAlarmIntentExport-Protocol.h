//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INSpeakableString, NSNumber;

@protocol INCreateAlarmIntentExport <NSObject, JSExport>
@property(nonatomic) unsigned long long alarmRepeatScheduleOptions;
@property(copy, nonatomic) INSpeakableString *label;
@property(copy, nonatomic) INDateComponentsRange *time;
@property(copy, nonatomic) NSNumber *relativeOffsetInMinutes;
- (id)init;
@end
