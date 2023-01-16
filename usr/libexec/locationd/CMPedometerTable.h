//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface CMPedometerTable : NSObject
{
    NSString *_tableName;	// 8 = 0x8
    NSString *_valueInName;	// 16 = 0x10
    NSString *_valueOutName;	// 24 = 0x18
    double _defaultValue;	// 32 = 0x20
    vector_0e047154 _binBoundariesWalk;	// 40 = 0x28
    vector_0e047154 _binBoundariesRun;	// 64 = 0x40
    vector_0e047154 _binBoundaries;	// 88 = 0x58
    _Bool _testMode;	// 112 = 0x70
    void *_persistentStore;	// 120 = 0x78
    NSMutableArray *_bins;	// 128 = 0x80
}

+ (id)convertToCMStrideCalibrationData:(id)arg1;	// IMP=0x0040000000583a80
+ (id)convertToCMPedometerBins:(id)arg1;	// IMP=0x0010000000583932
- (id).cxx_construct;	// IMP=0x0020000000583c1a
- (void).cxx_destruct;	// IMP=0x0010000000583bce
- (void)updateBinsWithValueOut:(double)arg1 valueIn:(double)arg2 alpha:(double)arg3;	// IMP=0x0010000000583432
- (id)description;	// IMP=0x0010000000583236
- (unsigned long long)walkBinCount;	// IMP=0x0010000000583224
- (_Bool)testMode;	// IMP=0x001000000058321b
- (void)binsDidChange;	// IMP=0x0010000000583215
- (void)logBins;	// IMP=0x001000000058320f
- (void)setBins:(id)arg1;	// IMP=0x001000000058315c
- (CDStruct_2c43369c)binIntervalForValueIn:(double)arg1;	// IMP=0x00100000005830fb
- (_Bool)isValueInValid:(double)arg1;	// IMP=0x00100000005830d8
- (unsigned long long)binIndexForValueIn:(double)arg1;	// IMP=0x0010000000583041
- (_Bool)isValueInRun:(double)arg1;	// IMP=0x001000000058302f
- (_Bool)isBin:(unsigned long long)arg1 sameActivityAsBin:(unsigned long long)arg2;	// IMP=0x0010000000582fc1
- (void)updateAdjacentBin:(unsigned long long)arg1 withAlpha:(double)arg2 valueOut:(double)arg3 nativeBin:(unsigned long long)arg4;	// IMP=0x0010000000582e79
- (void)updateNativeBin:(unsigned long long)arg1 withAlpha:(double)arg2 valueOut:(double)arg3;	// IMP=0x0010000000582d6f
- (_Bool)isRunNativeValueOutAvailable;	// IMP=0x0010000000582d2a
- (_Bool)isWalkNativeValueOutAvailable;	// IMP=0x0010000000582ce5
- (_Bool)isNativeValueOutAvailableInBinsFromIndex:(unsigned long long)arg1 withLength:(unsigned long long)arg2;	// IMP=0x0010000000582b69
- (double)valueOutForValueIn:(double)arg1;	// IMP=0x0010000000582756
- (id)copyBins;	// IMP=0x00100000005826fe
- (void)dealloc;	// IMP=0x00100000005826a3
- (id)defaultBins;	// IMP=0x00100000005825ce
- (id)binArrayToArchivedData:(id)arg1;	// IMP=0x001000000058254b
- (id)initWithTableName:(id)arg1 valueInName:(id)arg2 valueOutName:(id)arg3 defaultValue:(double)arg4 binBoundariesWalk:(vector_0e047154)arg5 binBoundariesRun:(vector_0e047154)arg6 testMode:(_Bool)arg7;	// IMP=0x0010000000581e78

@end
