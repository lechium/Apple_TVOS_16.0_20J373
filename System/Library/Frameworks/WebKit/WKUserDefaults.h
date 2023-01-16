//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

__attribute__((visibility("hidden")))
@interface WKUserDefaults : NSUserDefaults
{
    struct RetainPtr<NSString> m_suiteName;	// 32 = 0x20
    struct WeakObjCPtr<WKPreferenceObserver> m_observer;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000089566
- (void).cxx_destruct;	// IMP=0x0000000000089528
- (id)initWithSuiteName:(id)arg1;	// IMP=0x00000000000894aa
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000894a4
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;	// IMP=0x00000000000891b0
- (void)findPreferenceChangesAndNotifyForKeys:(id)arg1 toValuesForKeys:(id)arg2;	// IMP=0x0000000000088cdc

@end

