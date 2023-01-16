//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLHLocationClassifier, NSURL;

@interface CLHRequestStore : NSObject
{
    CLHLocationClassifier *_classifier;	// 8 = 0x8
    NSURL *_rootDir;	// 16 = 0x10
}

- (id)jsonObject;	// IMP=0x0020000000916119
- (id)allArchiveURLs;	// IMP=0x0010000000915e9e
- (id)requestArchivesForHarvester:(int)arg1;	// IMP=0x0010000000915c8e
- (unsigned long long)pointCountForHarvester:(int)arg1;	// IMP=0x0010000000915b68
- (void)pruneSecondaryDataOlderThan:(double)arg1 forHarvester:(int)arg2;	// IMP=0x0010000000915a4e
- (void)clearDataForHarvester:(int)arg1;	// IMP=0x0010000000915944
- (id)classifyingStoreForHarvesterWithSubArchiving:(int)arg1 itemCountThresholdForAutoCleanUp:(int)arg2;	// IMP=0x001000000091592a
- (id)classifyingStoreForHarvester:(int)arg1;	// IMP=0x0010000000915910
- (id)classifyingStoreForHarvester:(int)arg1 enableSubArchiving:(_Bool)arg2 itemCountThresholdForAutoCleanUp:(int)arg3;	// IMP=0x0010000000915846
- (id)archiveForHarvester:(int)arg1 withSuffix:(id)arg2;	// IMP=0x001000000091579b
- (id)archiveForHarvester:(int)arg1;	// IMP=0x001000000091571f
- (id)archiveWithIdentifier:(id)arg1;	// IMP=0x00100000009156bc
- (id)initWithRootDirectory:(id)arg1 classifier:(id)arg2;	// IMP=0x0010000000915653

@end

