# HUADsScrollAndPageView
广告条（轮播图）
- (void)viewDidLoad {
    [super viewDidLoad];

    HUScrollAndPageView *hu_scrollView = [[HUScrollAndPageView alloc] initWithFrame:CGRectMake(0, 64, WIDTH, 250)];
    
    [self.view addSubview:hu_scrollView];
    
    NSMutableArray *mArr = [NSMutableArray array];
    
    for (int i = 0; i < 4; i++) {
        
        UIImageView *imgView = [[UIImageView alloc] init];
        
        UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(20, 20, 20, 20)];
        
        label.backgroundColor = [UIColor redColor];
        
        label.text = [NSString stringWithFormat:@"%d",i];
        
        [imgView addSubview:label];
        
        UIImage *image = [UIImage imageNamed:@"屏幕快照 2016-01-18 下午1.32.28.png"];
        
        imgView.image = image;
        
        
        
        [mArr addObject:imgView];
    }
    
    [hu_scrollView shouldAutoShow:YES];
    
    hu_scrollView.imageViewAry = mArr;
    
    hu_scrollView.delegate =self;
    
    hu_scrollView.pageCtrlNormalColor = [UIColor groupTableViewBackgroundColor];
    
    hu_scrollView.pageCtrlSelectedColor = [UIColor whiteColor];
    
}
- (void)didClickPage:(HUScrollAndPageView *)view atIndex:(NSInteger)index
{
    NSLog(@"%ld",index);
}
