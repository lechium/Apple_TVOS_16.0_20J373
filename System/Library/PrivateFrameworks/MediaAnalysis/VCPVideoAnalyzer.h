//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoAnalyzer : NSObject
{
}

+ (unsigned long long)dependencies;	// IMP=0x008000000025cb08
- (id)results;	// IMP=0x000000000025cb26
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x000000000025cb1b
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x000000000025cb10

@end

