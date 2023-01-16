//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHStrokeGroupingResult.h"

@interface CHStrokeFastGroupingResult : CHStrokeGroupingResult
{
    vector_4ea6921b _fastGroupingClusters;	// 8 = 0x8
}

+ (id)_strokeGroupsFromFastGroupingClusters:(const void *)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5;	// IMP=0x006000000018bcc0
+ (id)_strokeGroupFromFastGroupingCluster:(const void *)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3;	// IMP=0x006000000018ba60
+ (id)_strokeGroupFromSortedStrokeIdentifiers:(id)arg1 strokeProvider:(id)arg2 strategyIdentifier:(id)arg3;	// IMP=0x006000000018b6c0
- (id).cxx_construct;	// IMP=0x000000000018c0c0
- (void).cxx_destruct;	// IMP=0x000000000018c030
@property(readonly, nonatomic) vector_4ea6921b fastGroupingClusters; // @synthesize fastGroupingClusters=_fastGroupingClusters;
- (id)initWithFastGroupingClusters:(const void *)arg1 clusteredStrokes:(id)arg2 strokeProvider:(id)arg3 strategyIdentifier:(id)arg4 clutterFilter:(id)arg5;	// IMP=0x000000000018b5f0

@end

