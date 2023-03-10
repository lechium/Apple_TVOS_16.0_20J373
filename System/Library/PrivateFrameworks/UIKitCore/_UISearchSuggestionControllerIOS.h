//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UISearchBar, UISearchTextField;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionControllerIOS
{
    UISearchTextField *_searchTextField;	// 8 = 0x8
    UISearchBar *_searchBar;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d1d61
@property(readonly, nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) __weak UISearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
- (void)updateSuggestions:(id)arg1 userInitiated:(_Bool)arg2;	// IMP=0x00000000000d1acd
- (void)updateMenuWithSuggestions:(id)arg1;	// IMP=0x00000000000d1abb
@property(readonly, nonatomic) _Bool hasVisibleMenu;
- (id)_suggestionsMenu;	// IMP=0x00000000000d1698
- (void)searchTextFieldDidGainSearchBar:(id)arg1;	// IMP=0x00000000000d1616
- (id)initWithSearchTextField:(id)arg1;	// IMP=0x00000000000d1575

@end

