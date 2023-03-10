//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FlexSegment : NSObject
{
    _Bool _sliceable;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
    long long _bars;	// 32 = 0x20
    long long _beatsPerBar;	// 40 = 0x28
    long long _samplesPerBar;	// 48 = 0x30
    NSArray *_customBarMarkers;	// 56 = 0x38
    long long _sampleRate;	// 64 = 0x40
    long long _sampleCount;	// 72 = 0x48
    NSDictionary *_transitions;	// 80 = 0x50
    NSDictionary *_markers;	// 88 = 0x58
    unsigned long long _type;	// 96 = 0x60
    unsigned long long _errors;	// 104 = 0x68
    NSDictionary *_metadataValues;	// 112 = 0x70
    NSString *_namePrefix;	// 120 = 0x78
    NSString *_nameStem;	// 128 = 0x80
    NSString *_nameIndex;	// 136 = 0x88
    NSString *_nameSuffix;	// 144 = 0x90
}

+ (long long)crossfadeLengthInSamplesForFromSeg:(id)arg1 toSeg:(id)arg2 fadeOutTimeInMsec:(long long)arg3 fadeInTimeInMsec:(long long)arg4 validFadeOutSamples:(long long *)arg5 validFadeInSamples:(long long *)arg6;	// IMP=0x001000000003e455
+ (long long)samplesForTimeInMsec:(long long)arg1 atSampleRate:(long long)arg2;	// IMP=0x001000000003e403
+ (id)segmentWithName:(id)arg1 inSegments:(id)arg2;	// IMP=0x001000000003e1c2
+ (id)segmentsWithType:(unsigned long long)arg1 nameIndex:(id)arg2 nameSuffix:(id)arg3 inSegments:(id)arg4;	// IMP=0x001000000003df8c
+ (id)segmentsWithType:(unsigned long long)arg1 inSegments:(id)arg2;	// IMP=0x001000000003de58
+ (_Bool)canTransitionFromSegment:(id)arg1 toSegment:(id)arg2 fromBarIndex:(long long)arg3 checkIfPrevented:(_Bool)arg4;	// IMP=0x001000000003d8f3
+ (id)longLabelForSegmentType:(unsigned long long)arg1;	// IMP=0x001000000003c6ad
+ (id)shortLabelForSegmentType:(unsigned long long)arg1;	// IMP=0x001000000003c693
+ (id)readInfoFromAudioFileAtPath:(id)arg1;	// IMP=0x001000000003bb42
- (void).cxx_destruct;	// IMP=0x000000000003e81d
@property(readonly, copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(readonly, copy, nonatomic) NSString *nameIndex; // @synthesize nameIndex=_nameIndex;
@property(readonly, copy, nonatomic) NSString *nameStem; // @synthesize nameStem=_nameStem;
@property(readonly, copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property(readonly, nonatomic) NSDictionary *metadataValues; // @synthesize metadataValues=_metadataValues;
@property(nonatomic) unsigned long long errors; // @synthesize errors=_errors;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *markers; // @synthesize markers=_markers;
@property(retain, nonatomic) NSDictionary *transitions; // @synthesize transitions=_transitions;
@property(nonatomic) _Bool sliceable; // @synthesize sliceable=_sliceable;
@property(nonatomic) long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) NSArray *customBarMarkers; // @synthesize customBarMarkers=_customBarMarkers;
@property(nonatomic) long long samplesPerBar; // @synthesize samplesPerBar=_samplesPerBar;
@property(nonatomic) long long beatsPerBar; // @synthesize beatsPerBar=_beatsPerBar;
@property(nonatomic) long long bars; // @synthesize bars=_bars;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)metadataValueForKey:(id)arg1;	// IMP=0x000000000003e6dc
- (void)addMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003e584
- (_Bool)relinkAllTransitions;	// IMP=0x000000000003dc63
- (_Bool)isPriorityValid;	// IMP=0x000000000003dc0d
- (void)removeTransitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;	// IMP=0x000000000003d73d
- (void)addOrReplaceTransition:(id)arg1 toSegmentNamed:(id)arg2 fromBarIndex:(long long)arg3;	// IMP=0x000000000003d4f0
- (id)transitionToSegmentNamed:(id)arg1 fromBarIndex:(long long)arg2;	// IMP=0x000000000003d397
- (void)setLinkedPerBarTransitions:(_Bool)arg1 toSegmentNamed:(id)arg2;	// IMP=0x000000000003d02a
- (_Bool)linkedPerBarTransitionsToSegmentNamed:(id)arg1;	// IMP=0x000000000003cf88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003cd62
- (long long)barDurationForBarIndex:(long long)arg1;	// IMP=0x000000000003cd1e
- (long long)barEndPositionForBarIndex:(long long)arg1;	// IMP=0x000000000003cc99
- (long long)barStartPositionForBarIndex:(long long)arg1;	// IMP=0x000000000003cb81
- (void)_decodeTypeInfoFromSegmentName;	// IMP=0x000000000003c6c7
- (id)description;	// IMP=0x000000000003c627
- (id)encodeAsDictionary;	// IMP=0x000000000003b64c
- (id)initWithFileAtPath:(id)arg1;	// IMP=0x000000000003b479
- (id)initAsCrossFade:(id)arg1 sampleRate:(long long)arg2 sampleCount:(long long)arg3 beatsPerBar:(long long)arg4;	// IMP=0x000000000003b35a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003ae20

@end

