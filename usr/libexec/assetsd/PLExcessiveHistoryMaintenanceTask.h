//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PLExcessiveHistoryMaintenanceTask
{
}

- (id)isHistorySizeExcessiveWithPathManager:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000112ea
- (void)_forceRebuildWithPathManager:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000000110ee
- (_Bool)runTaskWithTransaction:(id)arg1;	// IMP=0x0010000000010e75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

