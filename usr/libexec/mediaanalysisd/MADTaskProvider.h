//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MADTaskProvider : NSObject
{
}

+ (unsigned long long)taskID;	// IMP=0x00400000000ccb07
- (void)retireTask:(id)arg1;	// IMP=0x00400000000ccb54
- (id)nextClusterProcessingTask;	// IMP=0x00100000000ccb4c
- (id)nextDownloadAssetProcessingTask;	// IMP=0x00100000000ccb44
- (id)nextAssetProcessingTask;	// IMP=0x00100000000ccb3c
- (unsigned long long)iterations;	// IMP=0x00100000000ccb31
- (unsigned long long)priority;	// IMP=0x00100000000ccb29
- (unsigned long long)taskID;	// IMP=0x00100000000ccb0f

@end

