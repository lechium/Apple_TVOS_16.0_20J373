//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCharacteristic.h>

@class NSString, NSUUID;

@interface HMCharacteristic (HFDebugging)
+ (id)hf_descriptionForProperties:(id)arg1;	// IMP=0x00100000000a8eab
+ (id)_hf_visibleLightLevelTriggerValues;	// IMP=0x0010000000249c93
+ (long long)_hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2 top:(unsigned long long)arg3 bottom:(unsigned long long)arg4;	// IMP=0x00100000002490ea
+ (long long)hf_indexOfSortedValues:(id)arg1 closestToValue:(id)arg2;	// IMP=0x001000000024904b
+ (_Bool)hf_shouldCaptureCharacteristicTypeInActionSets:(id)arg1;	// IMP=0x00100000002473b2
+ (CDUnknownBlockType)hf_characteristicSortComparator;	// IMP=0x001000000024705d
+ (long long)hf_sortPriorityForCharacteristicType:(id)arg1;	// IMP=0x00100000002464ca
+ (id)hf_currentStateCharacteristicTypeForTargetStateCharacteristicType:(id)arg1;	// IMP=0x00100000002462ec
+ (id)hf_targetStateCharacteristicTypeForCurrentStateCharacteristicType:(id)arg1;	// IMP=0x001000000024610e
+ (id)hf_associatedCharacteristicTypeForCharacteristicType:(id)arg1;	// IMP=0x0010000000246099
+ (id)hf_descriptionForCharacteristicType:(id)arg1;	// IMP=0x0010000000245e64
+ (id)_hf_valueRangeCharacteristicTypeToVisibleTriggerValueStepMap;	// IMP=0x0010000000245d33
+ (id)_hf_valueRangeCharacteristicTypeToAbnormalValueMap;	// IMP=0x0010000000245b7a
+ (id)_hf_alarmCharacteristicTypeToAbnormalValueMap;	// IMP=0x00100000002459e2
+ (id)hf_abnormalValueForSensorCharacteristicType:(id)arg1;	// IMP=0x0010000000245959
+ (id)hf_defaultAbnormalValueForValueRangeSensorCharacteristicType:(id)arg1;	// IMP=0x00100000002458d6
+ (id)hf_abnormalValueForAlarmCharacteristicType:(id)arg1;	// IMP=0x0010000000245853
+ (id)hf_sensingCharacteristicTypes;	// IMP=0x0010000000245708
+ (id)hf_alarmCharacteristicTypes;	// IMP=0x00100000002455bb
+ (id)hf_continuousValueRangeCharacteristicTypes;	// IMP=0x0010000000245466
+ (id)hf_valueRangeCharacteristicTypes;	// IMP=0x0010000000245319
+ (id)hf_powerStateCharacteristicTypes;	// IMP=0x001000000024528a
+ (id)hf_suggestionVendorForCharacteristicType:(id)arg1;	// IMP=0x0010000000249cf4
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00100000000a9160
- (id)_hf_stepValue;	// IMP=0x0010000000249aa5
- (id)_hf_triggerValuesWithMinStepValue:(id)arg1;	// IMP=0x0010000000249706
- (id)_hf_lightLevelVisibleTriggerValues;	// IMP=0x00100000002493aa
- (id)hf_visibleTriggerValues;	// IMP=0x0010000000248f15
- (id)hf_triggerValues;	// IMP=0x0010000000248c6b
- (id)hf_maximumTriggerValue;	// IMP=0x0010000000248c1b
- (id)hf_minimumTriggerValue;	// IMP=0x0010000000248b77
- (id)hf_thresholdValueForRange:(id)arg1;	// IMP=0x00100000002488dd
- (id)hf_valueAfterTriggerValue:(id)arg1;	// IMP=0x0010000000248815
- (id)hf_valueBeforeTriggerValue:(id)arg1;	// IMP=0x0010000000248765
- (id)hf_programmableSwitchTriggerValueToEventTriggersMap;	// IMP=0x00100000002483b8
- (id)hf_designatedEventTriggerForProgrammableSwitchWithTriggerValue:(id)arg1;	// IMP=0x001000000024827e
- (id)hf_eventTriggersForTriggerValue:(id)arg1;	// IMP=0x0010000000247dbf
- (id)hf_eventTriggers;	// IMP=0x0010000000247a35
- (id)hf_home;	// IMP=0x00100000002479bb
- (id)hf_programmableSwitchValidValueSet;	// IMP=0x001000000024759d
- (_Bool)hf_shouldCaptureInActionSets;	// IMP=0x0010000000247513
- (long long)hf_sortPriority;	// IMP=0x0010000000246fff
- (id)hf_associatedCharacteristicType;	// IMP=0x001000000024602f
- (id)hf_defaultValue;	// IMP=0x0010000000245f51
- (_Bool)hf_isReadable;	// IMP=0x0010000000245f03
- (_Bool)hf_isWritable;	// IMP=0x0010000000245eb5
- (id)hf_characteristicTypeDescription;	// IMP=0x0010000000245dfa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

