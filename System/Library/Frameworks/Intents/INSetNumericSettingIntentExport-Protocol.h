//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INNumericSettingValue, INSettingMetadata, INTemporalEventTrigger;

@protocol INSetNumericSettingIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property(nonatomic) long long action;
@property(nonatomic) long long boundedValue;
@property(copy, nonatomic) INNumericSettingValue *numericValue;
@property(copy, nonatomic) INSettingMetadata *settingMetadata;
- (id)init;
@end

