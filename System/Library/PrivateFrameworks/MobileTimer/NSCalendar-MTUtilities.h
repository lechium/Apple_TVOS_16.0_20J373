//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCalendar.h>

@interface NSCalendar (MTUtilities)
+ (unsigned long long)_optionsForBackwards:(_Bool)arg1;	// IMP=0x005000000004050f
+ (id)mtGregorianCalendar;	// IMP=0x00500000000400a7
- (_Bool)mtDateRequiresSingularTimeString:(id)arg1;	// IMP=0x001000000004051f
- (id)_nextDateHelperAfterDate:(id)arg1 nextDateBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000403a0
- (id)_mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3 backwards:(_Bool)arg4;	// IMP=0x00100000000402a2
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;	// IMP=0x001000000004028a
- (id)mtNextDateAfterDate:(id)arg1 matchingUnit:(unsigned long long)arg2 value:(long long)arg3;	// IMP=0x0010000000040275
- (id)_mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2 backwards:(_Bool)arg3;	// IMP=0x0010000000040143
- (id)mtPreviousDateBeforeDate:(id)arg1 matchingComponents:(id)arg2;	// IMP=0x001000000004012b
- (id)mtNextDateAfterDate:(id)arg1 matchingComponents:(id)arg2;	// IMP=0x0010000000040116
@end

