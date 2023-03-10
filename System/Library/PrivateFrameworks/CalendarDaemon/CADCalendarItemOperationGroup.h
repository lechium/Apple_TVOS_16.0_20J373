//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADCalendarItemOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x001000000001fc11
- (void)CADDatabaseExportICSForCalendarItemWithID:(id)arg1 occurrenceDate:(id)arg2 options:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021413
- (void)CADDatabaseiTIPImport:(id)arg1 intoCalendarID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000210cd
- (void)CADDatabaseCancelFetchRequestWithIdentifier:(unsigned int)arg1;	// IMP=0x0000000000020f45
- (void)CADDatabaseFetchCalendarItemsWithPredicate:(id)arg1 entityType:(int)arg2 fetchIdentifier:(int)arg3 synchronous:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0000000000020aba
- (void)CADDatabaseGetAlarmWithExternalID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020804
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:(id)arg1 inCalendar:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000002030d
- (void)CADDatabaseGetCalendarItemsWithUUIDs:(id)arg1 inCalendars:(id)arg2 propertiesToLoad:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001fec8
- (void)CADDatabaseGetCalendarItemWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fc19

@end

