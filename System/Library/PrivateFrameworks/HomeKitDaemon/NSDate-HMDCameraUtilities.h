//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (HMDCameraUtilities)
+ (id)hmd_dateFromSnapshotFileName:(id)arg1;	// IMP=0x00100000002e1cc7
+ (id)hmd_snapshotFileNameDateFormatter;	// IMP=0x00100000002e1c97
+ (id)hm_iso8601dateFromString:(id)arg1;	// IMP=0x0010000000685fac
+ (unsigned char)hm_dayOfTheWeek;	// IMP=0x0010000000685efa
@property(readonly, copy) NSString *hmd_snapshotFileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

