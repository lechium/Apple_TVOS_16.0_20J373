//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatistics : NSObject
{
    NSString *_key;	// 8 = 0x8
    double _sampleValue;	// 16 = 0x10
    NSMutableSet *_children;	// 24 = 0x18
    double _sampleRate;	// 32 = 0x20
}

+ (unsigned long long)currentTime;	// IMP=0x006000000101c871
+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;	// IMP=0x006000000101ee6b
+ (id)coverSheetButtonMaximumForceWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x006000000101ede4
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1;	// IMP=0x006000000101ed6a
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)arg1;	// IMP=0x006000000101ecf0
+ (id)coverSheetButtonInteractionCountWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x006000000101ec69
+ (id)recentsInputViewNewEntryCount;	// IMP=0x006000000101ebf6
+ (id)recentsInputViewItemSelectedCount;	// IMP=0x006000000101eb83
+ (id)recentsInputViewNumberOfItems;	// IMP=0x006000000101eb10
+ (id)recentsInputViewPresentationCount;	// IMP=0x006000000101ea9d
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;	// IMP=0x006000000101ea2c
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;	// IMP=0x006000000101e9bb
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;	// IMP=0x006000000101e94a
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;	// IMP=0x006000000101e8d9
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;	// IMP=0x006000000101e868
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;	// IMP=0x006000000101e7f7
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;	// IMP=0x006000000101e786
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;	// IMP=0x006000000101e715
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;	// IMP=0x006000000101e6a4
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;	// IMP=0x006000000101e633
+ (id)scrollBounceCount;	// IMP=0x006000000101e5bd
+ (id)zoomGestureCount;	// IMP=0x006000000101e547
+ (id)pinchGestureCount;	// IMP=0x006000000101e4d1
+ (id)alertButtonTapCount;	// IMP=0x006000000101e4b6
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x006000000101e443
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x006000000101e3d0
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x006000000101e23a
+ (id)scrubberUsageTime;	// IMP=0x006000000101e1cc
+ (id)scrubberUsageCount;	// IMP=0x006000000101e15e
+ (id)maxForce;	// IMP=0x006000000101e06c
+ (id)previewInteractionPopForce;	// IMP=0x006000000101dfa4
+ (id)previewInteractionPeekForce;	// IMP=0x006000000101dedc
+ (id)previewInteractionAlertPresentationCount;	// IMP=0x006000000101de11
+ (id)previewInteractionTapCount;	// IMP=0x006000000101dd80
+ (id)previewInteractionPopCount;	// IMP=0x006000000101dcb5
+ (id)previewInteractionPeekDuration;	// IMP=0x006000000101dbea
+ (id)previewInteractionPeekCount;	// IMP=0x006000000101db1f
- (void).cxx_destruct;	// IMP=0x000000000101d801
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;	// IMP=0x000000000101d734
- (void)_incrementValueBy:(long long)arg1;	// IMP=0x000000000101d5a9
- (void)_setValue:(long long)arg1;	// IMP=0x000000000101d41e
- (void)_resetValue;	// IMP=0x000000000101d2c0
- (void)_recordDistributionTime:(unsigned long long)arg1;	// IMP=0x000000000101d135
- (void)_recordDistributionValue:(double)arg1;	// IMP=0x000000000101cfa2
- (void)_resetDistributionToValue:(double)arg1;	// IMP=0x000000000101cdde
- (void)_resetDistribution;	// IMP=0x000000000101cc80
- (void)randomizeSampleValue;	// IMP=0x000000000101cc52
- (_Bool)_shouldSample;	// IMP=0x000000000101cbff
- (void)_removeChildStatistic:(id)arg1;	// IMP=0x000000000101cb9d
- (void)_addChildStatistic:(id)arg1;	// IMP=0x000000000101cb48
- (id)initWithDomain:(id)arg1;	// IMP=0x000000000101cb19
- (id)_key;	// IMP=0x000000000101cb0b
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;	// IMP=0x000000000101c928
- (id)init;	// IMP=0x000000000101c879

@end

