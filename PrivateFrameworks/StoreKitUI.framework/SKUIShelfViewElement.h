/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIShelfViewElement : SKUIViewElement {
    int _numberOfRows;
    id /* block */ _shelfItemViewElementValidator;
    NSString *_slideshowTitle;
}

@property (nonatomic, readonly) int numberOfRows;
@property (nonatomic, copy) id /* block */ shelfItemViewElementValidator;
@property (nonatomic, readonly) NSString *slideshowTitle;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)enumerateChildrenUsingBlock:(id /* block */)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)numberOfRows;
- (int)pageComponentType;
- (void)setShelfItemViewElementValidator:(id /* block */)arg1;
- (id /* block */)shelfItemViewElementValidator;
- (id)slideshowTitle;

@end
