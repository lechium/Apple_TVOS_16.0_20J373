//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSNovDetector : NSObject
{
}

- (id)getOptionValue:(id)arg1;	// IMP=0x0040000000072272
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;	// IMP=0x001000000007226a
- (id)getBestAnalyzedResult;	// IMP=0x0010000000072262
- (id)getAnalyzedResultForPhId:(unsigned int)arg1;	// IMP=0x001000000007225a
- (unsigned int)numResultsAvailable;	// IMP=0x0010000000072252
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x001000000007224c
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0010000000072246
- (void)resetBest;	// IMP=0x0010000000072240
- (void)reset;	// IMP=0x001000000007223a
- (void)dealloc;	// IMP=0x001000000007220b
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x00100000000721dc

@end
