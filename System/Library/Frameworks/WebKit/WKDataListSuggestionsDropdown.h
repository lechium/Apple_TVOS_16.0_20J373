//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsDropdown
{
}

- (void)_updateTextSuggestions;	// IMP=0x0000000000381b78
- (void)_showSuggestions;	// IMP=0x0000000000381b72
- (void)_displayWithActivationType:(unsigned char)arg1;	// IMP=0x0000000000381acc
- (void)didSelectOptionAtIndex:(long long)arg1;	// IMP=0x0000000000381a6d
- (void)invalidate;	// IMP=0x0000000000381a67
- (void)showSuggestionsDropdown:(void *)arg1 activationType:(unsigned char)arg2;	// IMP=0x0000000000381a1c
- (void)updateWithInformation:(void *)arg1;	// IMP=0x00000000003819d0
- (id)initWithInformation:(void *)arg1 inView:(id)arg2;	// IMP=0x00000000003819a1

@end
