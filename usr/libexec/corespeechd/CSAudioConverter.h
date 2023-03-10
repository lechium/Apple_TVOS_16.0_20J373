//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_opusConverter;	// 8 = 0x8
    NSMutableData *_bufferedLPCM;	// 16 = 0x10
    unsigned int _recordBasePacketsPerSecond;	// 24 = 0x18
    struct AudioStreamBasicDescription _opusOutASBD;	// 32 = 0x20
    unsigned int _convertPacketCount;	// 72 = 0x48
    unsigned int _convertAudioCapacity;	// 76 = 0x4c
    unsigned long long _lastTimestamp;	// 80 = 0x50
    unsigned long long _lastArrivalTimestampToAudioRecorder;	// 88 = 0x58
    float _outPacketSizeInSec;	// 96 = 0x60
    id <CSAudioConverterDelegate> _delegate;	// 104 = 0x68
}

+ (id)speexConverter;	// IMP=0x00400000000e0d12
+ (id)narrowBandOpusConverter;	// IMP=0x00100000000e0c65
+ (id)opusConverter;	// IMP=0x00100000000e0bb8
- (void).cxx_destruct;	// IMP=0x00200000000e1e23
@property __weak id <CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;	// IMP=0x00100000000e192f
- (void)reset;	// IMP=0x00100000000e188d
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(_Bool)arg2 timestamp:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4;	// IMP=0x00100000000e1110
- (void)flush;	// IMP=0x00100000000e10ed
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x00100000000e1015
- (void)dealloc;	// IMP=0x00100000000e0fce
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x00100000000e0dbf

@end

