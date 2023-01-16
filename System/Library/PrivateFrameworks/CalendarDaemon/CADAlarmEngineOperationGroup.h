//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADAlarmEngineOperationGroup : CADOperationGroup
{
}

+ (id)whitelistedBundles;	// IMP=0x00100000000066b0
+ (_Bool)requiresEventAccess;	// IMP=0x00100000000066a8
- (id)_getAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 forDatabase:(struct CalDatabase *)arg4 databaseID:(int)arg5 calendarIDsForThisDatabase:(id)arg6 accessLogger:(CDUnknownBlockType)arg7;	// IMP=0x0000000000006f7d
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:(id)arg1 toEnd:(id)arg2 inCalendars:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000068c2
- (void)CADDatabaseGetAlarmWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000066bd

@end
